var codes = {
    'A': 1, 'B': 2, 'C': 3, 'D': 4, 'E': 5, 'F': 6, 'G': 7, 'H': 8, 'I': 9,
    'J': 10, 'K': 11, 'L': 12, 'M': 13, 'N': 14, 'O': 15, 'P': 16, 'Q': 17,
    'R': 18, 'S': 19, 'T': 20, 'U': 21, 'V': 22, 'W': 23, 'X': 24, 'Y': 25,
    'Z': 26, ' ': 27, 'a': 28, 'b': 29, 'c': 30, 'd': 31, 'e': 32, 'f': 33,
    'g': 34, 'h': 35, 'i': 36, 'j': 37, 'k': 38, 'l': 39, 'm': 40, 'n': 41,
    'o': 42, 'p': 43, 'q': 44, 'r': 45, 's': 46, 't': 47, 'u': 48, 'v': 49,
    'w': 50, 'x': 51, 'y': 52, 'z': 53, '0': 54, '1': 55, '2': 56, '3': 57,
    '4': 58, '5': 59, '6': 60, '7': 61, '8': 62, '9': 63, '~': 0
};

var code_matrix = [
    [1, 2, 3],
    [1, 1, 2],
    [0, 1, 2]
];

var inverse_code_matrix = [
    [0, 1, -1],
    [2, -2, -1],
    [-1, 1, 1]
];

var message = "CRYPTOGRAPHY";
encode_message(message);

function char_to_code(char) {
    return codes[char];
}

function code_to_char(char) {
    for (var key in codes) {
        if (codes[key] === char) {
            return key;
        }
    }
}

var msg_codes = [char_to_code('C'), char_to_code('R'), char_to_code('Y')];

function encode(matrix, msg_codes) {
    var encoded_matrix = [];
    for (var a = 0; a < matrix.length; a++) {
        var sum = 0;
        for (var b = 0; b < matrix[a].length; b++) {
            sum += matrix[a][b] * msg_codes[b];
        }

        encoded_matrix.push(sum);
    }

    return encoded_matrix;
}

function decode(matrix, msg_codes) {
    var decoded_matrix = [];

    for (var i = 0, leni = matrix.length; i < leni; i++) {
        var sum = 0;
        for (var j = 0, lenj = matrix[i].length; j < lenj; j++) {
            sum += matrix[i][j] * msg_codes[j];
        }
        decoded_matrix.push(code_to_char(sum));
    }

    return decoded_matrix;
}

function encode_message(msg) {
    var list = [];

    for (var i = 0; i < msg.length; i+=3) {
        var i0 = char_to_code(msg[i]);
        var i1 = char_to_code(msg[i+1] || '~');
        var i2 = char_to_code(msg[i+2] || '~');

        console.log(i0, i1, i2)

        list.push(encode(code_matrix, [i0, i1, i2]));
    }

    return list;
}

function decode_message(msg_code_list) {
    var list = "";
    for (var i = 0, len = msg_code_list.length; i < len; i+=3) {
        var i0 = msg_code_list[i];
        var i1 = msg_code_list[i+1];
        var i2 = msg_code_list[i+2];
        list += decode(inverse_code_matrix, [i0, i1, i2]);
    }
    list = list.split(',').join('').split('~').join('');
    return list;
}

var codeForm = new Vue({
    el: "#code_form",
    data: {
        input_msg: "",
        output_msg: ""
    },
    methods: {
        encrypt: function () {
            var encoded_list = encode_message(this.input_msg);
            this.output_msg = encoded_list;
        },

        decrypt: function () {
            var encoded_codes = this.input_msg.split(',');
            this.output_msg = decode_message(encoded_codes);
        }
    }
});
