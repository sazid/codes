import java.util.ArrayList;

class EquationParser {
    ArrayList<Object> equation = new ArrayList<>();

    /**
     * Should be in the format:
     * num0 + num1 - num2 * num4 / num5
     * @return true if validation succeeds, false otherwise
     */
    boolean validate(ArrayList<Object> eq) {
        if (eq.size() % 2 == 0) return false;

        for (int i = 0; i < eq.size(); i++) {
            if (i % 2 == 0) {
                try {
                    double d = Double.parseDouble(eq.get(i).toString());
                } catch (NumberFormatException e) {
                    return false;
                }
            } else {
                try {
                    double d = Double.parseDouble(eq.get(i).toString());
                    return false;
                } catch (NumberFormatException ignored) {
                }
            }
        }

        return true;
    }

    double solve(ArrayList<Object> eq) {
        if (!validate(eq)) return Double.NaN;

        double result;

        while (eq.indexOf("*") != -1) {
            int i = eq.indexOf("*");

            double a = Double.parseDouble(eq.get(i - 1).toString());
            double b = Double.parseDouble(eq.get(i + 1).toString());
            result = (a * b);

            i = i-1;
            eq.remove(i);
            eq.remove(i);
            eq.remove(i);
            eq.add(i, result);
        }

        while (eq.indexOf("/") != -1) {
            int i = eq.indexOf("/");

            double a = Double.parseDouble(eq.get(i - 1).toString());
            double b = Double.parseDouble(eq.get(i + 1).toString());
            result = (a / b);

            i = i-1;
            eq.remove(i);
            eq.remove(i);
            eq.remove(i);
            eq.add(i, result);
        }

        while (eq.indexOf("+") != -1) {
            int i = eq.indexOf("+");

            double a = Double.parseDouble(eq.get(i - 1).toString());
            double b = Double.parseDouble(eq.get(i + 1).toString());
            result = (a + b);

            i = i-1;
            eq.remove(i);
            eq.remove(i);
            eq.remove(i);
            eq.add(i, result);
        }

        while (eq.indexOf("-") != -1) {
            int i = eq.indexOf("-");

            double a = Double.parseDouble(eq.get(i - 1).toString());
            double b = Double.parseDouble(eq.get(i + 1).toString());
            result = (a - b);

            i = i-1;
            eq.remove(i);
            eq.remove(i);
            eq.remove(i);
            eq.add(i, result);
        }

        return Double.parseDouble(eq.get(0).toString());
    }
}
