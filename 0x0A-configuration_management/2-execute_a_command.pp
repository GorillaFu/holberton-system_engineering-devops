# kill process named killmenow with pkill

exec { 'Terminate-Process':
  command => '/usr/bin/pkill -f killmenow'
}