Log64

Library is designed to be used when logging on the serial is desired during testing, but in the same time when in release the logging need to be omitted and free all teh memory that it had accupied.

Also the library provide option to store logging in the EPROM and been able to be dumped on next start - this option need to be underetened before using it - as every start will clear the EPROM after displaying on the serial its logging content. In brief if you start it twice the logging in the EPROM from the previouse start will be lost.
