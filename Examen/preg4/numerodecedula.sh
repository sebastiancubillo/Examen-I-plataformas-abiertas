#para descargar el archivo utilice el comando "wget https://www.tse.go.cr/zip/padron/padron_completo.zip"
#una vez descargado se descomprime con el comando "unzip"
unzip padron_completo.zip
#una vez descomprimido se utiliza el comando "grep mas la palabra a buscar, en este caso un numero de cedula" 
#junto con la ruta del archivo en el cual se desea buscar y el nombre del txt.
grep "504410983" C:\Users\andre\Desktop\Examen\preg4 PADRON_COMPLETO.txt

