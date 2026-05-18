
void FUN_ram_420ae95c(uint param_1)

{
  char cVar1;
  ushort *puVar2;
  ushort local_24 [14];
  
  FUN_ram_4039c11e(local_24,0x3fcb8718,0x12);
  puVar2 = local_24;
  cVar1 = '\0';
  do {
    if (*puVar2 == param_1) {
      return;
    }
    cVar1 = cVar1 + '\x01';
    puVar2 = puVar2 + 1;
  } while (cVar1 != '\t');
  return;
}

