# Accessing Files Created at University Computers

Whenever you login into the Linux on our lab computer,
your home directory is mounted for you from a shared data storage.
This directory is stored at the department's NFS storage.
The same home directory is also mounted on the `linedu.vsb.cz` server
that you can you for remote work.


## Access files on `linedu.vsb.cz` server

To access your files, you can use either Linux or Windows but first,
you have to be present at the university network throughout VPN
(if you at dorms, you are already at the university network, so no VPN is needed).
To connect to the VPN, please, see the [VPN documentation](https://idoc.vsb.cz/xwiki/bin/view/tuonet/vpn/).


### Access files from Linux

You can use any remote connection. This may include good old `mc` (Midnight Commander), Gnome File Manager, etc.


#### `mc`

Use Left or Right menu and select `Shell link...`. Specify your link as:

`<YOUR-UNIVERSITY-LOGIN-NAME>@linedu.vsb.cz`

After you connect in, the panel will show you remote root directory of the server, type `cd` into the prompt below to get into your home directory.


#### Gnome File Manager

Please, follow instructions in [one](https://www.techrepublic.com/article/how-to-use-linux-file-manager-to-connect-to-an-sftp-server/)
or [other](https://help.gnome.org/users/gnome-help/stable/nautilus-connect.html.en) tutorial.


### Access files from Windows

[WinSCP](https://winscp.net) is the easiest way to copy files from remote servers on Windows.
You can find [basic setup](https://winscp.net/eng/docs/guide_connect) at the WinSCP website.


### Login parameters

`server name: linedu.vsb.cz`
`server port: 22`
`login: <YOUR-UNIVERSITY-LOGIN-NAME>`
`password: <YOUR-UNIVERSITY-PASSWORD>`
