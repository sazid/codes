classes = {}
# classes['physics'] = {'start': 8, 'end': 9.30}
classes['art'] = {'start': 9, 'end': 10}
classes['eng'] = {'start': 9.30, 'end': 10.30}
classes['math'] = {'start': 10, 'end': 11}
classes['cs'] = {'start': 10.30, 'end': 11.30}
classes['music'] = {'start': 11, 'end': 12}

# list of selected classes
selected = []
# print classes

def find_next_class(end_time):
	earliest_time = float('inf')
	selected_cls = None
	for cls in classes.keys():
		start = classes[cls]['start']
		if cls not in selected and start <= earliest_time and start >= end_time:
			selected_cls = cls
			earliest_time = start
	
	return selected_cls


target_end_time = 12
previous_time = 0
while previous_time <= target_end_time:
	cls = find_next_class(previous_time)
	if cls == None: break
	previous_time = classes[cls]['end']
	selected.append(cls)
	
	print '%s: \t\tstart: %s\tend: %s' % (cls, classes[cls]['start'], classes[cls]['end'])

