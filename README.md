<p align="center">
  <i><br>HTTP/1.1 Protocol compliant and resilient server, based on nginx.</i><br><br>
</p>

```
          :::      ::::::::       The goal of the project is to build a C++98 compatible
        :+:      :+:    :+:       HTTP web server from scratch. The web server can handle
      +:+ +:+         +:+         HTTP GET, POST, PUT and DELETE Requests, and can serve
    +#+  +:+       +#+            static files from a specified root directory or
  +#+#+#+#+#+   +#+               dynamic content using CGI. It is also able to handle
       #+#    #+#                 multiple client connections concurrently with the help
      ###   ########.fr           of epoll().

                                  June 2024
```

> [!NOTE]
> The important thing is **resilience**. The server should never die.
