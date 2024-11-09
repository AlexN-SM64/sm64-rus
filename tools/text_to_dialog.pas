program sm64_text_to_dialog;
  var i, j, k, sp, r: integer; s, t: string;
  const c: array[1..144] of char =     (' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F',
                                             'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
                                             'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
                                             'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '''', '.',
                                             ',', '-', '(', ')', ':', '!', '"', '?', 'Ё', 'ё', '^', '|', '<', '>', '/',
                                             'А', 'Б', 'В', 'Г', 'Д', 'Е', 'Ж', 'З', 'И', 'Й', 'К', 'Л', 'М', 'Н', 'О', 'П',
                                             'Р', 'С', 'Т', 'У', 'Ф', 'Х', 'Ц', 'Ч', 'Ш', 'Щ', 'Ъ', 'Ы', 'Ь', 'Э', 'Ю', 'Я',
                                             'а', 'б', 'в', 'г', 'д', 'е', 'ж', 'з', 'и', 'й', 'к', 'л', 'м', 'н', 'о', 'п',
                                             'р', 'с', 'т', 'у', 'ф', 'х', 'ц', 'ч', 'ш', 'щ', 'ъ', 'ы', 'ь', 'э', 'ю', 'я');
        cw: array[1..144] of integer = (5,   7,   7,   7,   7,   7,   7,   7,   7,   7,   7,   6,   6,   6,   6,   6,   6,
                                             6,   6,   5,   6,   6,   5,   8,   8,   6,   6,   6,   6,   6,   5,   6,   6,
                                             8,   7,   6,   6,   6,   5,   5,   6,   5,   5,   6,   5,   4,   5,   5,   3,
                                             7,   5,   5,   5,   6,   5,   5,   5,   5,   5,   7,   7,   5,   5,   4,   4,
                                             4,   6,   5,   5,   4,   5,   6,   7,   6,   5,   8,   8,   8,   8,   10,
                                             6,   6,   6,   6,   8,   6,   8,   6,   8,   8,   6,   7,   8,   6,   6,   6,
                                             6,   6,   5,   6,   8,   7,   7,   6,   8,   8,   7,   8,   6,   6,   8,   6,
                                             6,   5,   5,   5,   5,   5,   7,   5,   5,   5,   5,   5,   7,   5,   5,   5,
                                             5,   5,   7,   5,   7,   7,   5,   5,   7,   7,   6,   7,   5,   5,   7,   5);
        lw: integer = 133;
begin
  writeln('Вставьте знак разделителя "\" между словами, чтобы разделить на новую строку.');
  writeln;
  write('Введите текст: ');
  readln(s);
  writeln;
  writeln('Результат:');
  i:=0;
  j:=0;
  repeat
    i:=i+1;
    if s[i]='[' then begin
      i:=i+1;
      if (s[i]='A') or (s[i]='B') or (s[i]='Z') or (s[i]='R') or (s[i]='%') then j:=j+7;
      if s[i]='C' then j:=j+6;
      if s[i]='1' then j:=j+1;
      if s[i]='2' then j:=j+2;
      if s[i]='3' then j:=j+3;
      if s[i]='4' then j:=j+4;
      if s[i]='5' then j:=j+5;
      if s[i]='6' then j:=j+6;
      if s[i]='7' then j:=j+7;
      if s[i]='8' then j:=j+8;
      if s[i]='9' then j:=j+9;
      if s[i]='0' then j:=j+0;
      i:=i+1;
      if not i=length(s) then i:=i+1;
    end else if s[i]='\' then
    begin
      sp:=i;
      j:=0;
    end else begin
    k:=0;
    repeat
      k:=k+1;
    until (c[k]=s[i]) or (k=143);
    j:=j+cw[k];
    end;
    if s[i]=' ' then sp:=i;
    if ((j>lw) and not (sp=0)) then 
      begin
        i:=sp;
        j:=0;
        s[sp]:='\';
      end;
  until i=length(s);
  t:='';
  r:=1;
  for i:=1 to length(s) do
  begin
    if s[i]='\' then
    begin
      writeln(t);
      t:='';
      r:=r+1;
    end else t:=t+s[i];
    if i=length(s) then writeln(t);
  end;
  writeln;
  writeln('Строки: ',r);
  writeln('Ширина текста в последней строке: ',j);
end.