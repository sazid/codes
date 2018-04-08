from collections import deque

graph = {}
graph["you"] = ['alice', 'bob', 'claire']
graph["bob"] = ['anuj', 'peggy']
graph["alice"] = ['peggy']
graph["claire"] = ['thom', 'jonny']
graph["anuj"] = []
graph["peggy"] = []
graph["thom"] = []
graph["jonny"] = []

def person_is_seller(name):
    return name[-1] == 'm'

def bfs(graph, root):
    Q = deque()
    Q += graph[root]
    searched = []

    while Q:
        person = Q.popleft()

        if person not in searched:
            if person_is_seller(person):
                print(person + " is a mango seller")
                return True
            else:
                Q += graph[person]
            searched.append(person)

    return False

bfs(graph, "you")

