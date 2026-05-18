
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4205908c(void)

{
  bool bVar1;
  char cVar2;
  
  if (DAT_ram_3fcc533c == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  cVar2 = DAT_ram_3fcc533c + -1;
  bVar1 = DAT_ram_3fcc533c == '\x01';
  DAT_ram_3fcc533c = cVar2;
  if (bVar1) {
    FUN_ram_42058d78(_DAT_ram_3fcc5340);
    _DAT_ram_3fcc5340 = 0;
  }
  return;
}

