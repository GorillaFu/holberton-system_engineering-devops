# install nginx with puppet

exec { 'Install_Nginx':
    command =>'sudo apt-get -y update && sudo apt-get -y install nginx && echo "Holberton School Server 2" > /var/www/html/index.nginx-debian.html && new_string="server_name _;\n\tadd_header X-Served-By $HOSTNAME;" && sudo sed -i "s/server_name _;/$new_string/" /etc/nginx/sites-available/default && sudo service nginx restart',
    provider =>'shell',
}
