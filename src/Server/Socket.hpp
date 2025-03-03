#ifndef SOCKET_HPP
# define SOCKET_HPP

# include <iostream>
# include <sys/socket.h>
# include <netinet/in.h>
# include <arpa/inet.h>

# include "Utils.hpp"
# include "BlocServer.hpp"

#define BACKLOGS 100


class Socket
{
	private:
		int							_fd;
		std::string					_ip;
		unsigned int				_port;
		std::vector<BlocServer>*	_servers;
		struct sockaddr_in			_addr;
	public:
		Socket(void);
		Socket(int fd, std::string ip, unsigned int port, std::vector<BlocServer>* servers);
		Socket(Socket const &src);
		~Socket(void);

		Socket &operator=(const Socket &rhs);

		/* GETTERS */
		std::string getIp(void) const { return _ip; }
		unsigned int getPort(void) const { return _port; }
		int getFd(void) const { return _fd; }
		std::vector<BlocServer>* getServers(void) const { return _servers; }
		struct sockaddr_in getAddr(void) const { return _addr; }
};

#endif // SOCKET_HPP
