#/usr/bin/env ruby

def new_file(command_path)
 if command_path.size() > 2 
   puts "Incorrect new usage, see help for correct usage"
   return 
 end
 return 
end




loop do
 #main
 print "turtle> "
 command = gets.chomp
 command.lstrip!

 #break input into string
 command_array = command.split
 first = command_array[0]
 if first == "help"
   puts "new:     creates a new screen to draw on"
   next
 elsif first == "new"
   puts "new"
   new_file(command_array)
   next
 elsif first == "quit"
   puts "quit"
   break
 elsif first == nil
   next
 elsif first == "line"
   puts "line"
 elsif first == "size"
   puts "size"
 elsif first == "color"
   puts "color"
 else 
   puts "invalid command: #{command}"
 end

end
