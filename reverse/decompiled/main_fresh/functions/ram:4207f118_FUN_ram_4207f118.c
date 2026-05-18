
void FUN_ram_4207f118(void)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(gp + -0xb4) + 0x416);
  if (cVar1 == '\x01') {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc4ec,*(int *)(gp + -0xb4) + 8);
    DAT_ram_3fcc4253 = cVar1;
    return;
  }
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc538);
  return;
}

