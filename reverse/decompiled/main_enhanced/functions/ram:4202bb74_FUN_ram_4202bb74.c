
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202bb74(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  FUN_ram_4202b7dc();
  cVar1 = *(char *)(_DAT_ram_3fcb6b88 + 1);
  if (cVar1 == '\x01') {
    FUN_ram_4202b7f6();
    iVar4 = 0xf;
  }
  else if (cVar1 == '\x02') {
    FUN_ram_4202b7f6();
    iVar4 = 2;
  }
  else {
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    *(undefined1 *)(_DAT_ram_3fcb6b88 + 1) = 2;
    FUN_ram_4202b7f6();
    puVar2 = _DAT_ram_3fcb6b8c;
    uVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 4))();
    iVar4 = _DAT_ram_3fcb6a44;
    puVar2[0x13] = uVar3;
    (**(code **)(iVar4 + 0x60))(_DAT_ram_3fcb6b8c + 5,*_DAT_ram_3fcb6b8c,0x4201ba5c,0);
    iVar4 = FUN_ram_420320bc();
    if (iVar4 == 0) {
      FUN_ram_4202b994();
    }
  }
  return iVar4;
}

