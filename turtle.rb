loop do
 #main
 print "turtle> "
 command = gets.chomp
 command.lstrip!

 #break input into string
 command_array = command.split
 first = command_array[0]
 if first == "help"
   puts "new 'filename':     create a filename to draw on"
   next
 elsif first == "new"
   puts "new"
   next
 elsif first == "quit"
   puts "quit"
   break
 elsif first == nil
   next
 else 
   puts "invalid command: #{command}"
 end

end
