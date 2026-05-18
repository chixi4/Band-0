
void FUN_ram_4207f19c(void)

{
  if (*(char *)(*(int *)(gp + -0xb4) + 0x416) != '\0') {
    DAT_ram_3fcc4259 = 1;
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc580,*(int *)(gp + -0xb4) + 8);
    return;
  }
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fc5c4);
  return;
}

