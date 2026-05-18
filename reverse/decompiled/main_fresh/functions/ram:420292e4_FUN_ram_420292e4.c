
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420292e4(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  if ((_DAT_ram_3fcb6b7c != (int *)0x0) ||
     (_DAT_ram_3fcb6b7c = (int *)FUN_ram_403a5e02(1,0x28), _DAT_ram_3fcb6b7c != (int *)0x0)) {
    piVar1 = _DAT_ram_3fcb6b7c;
    iVar3 = *_DAT_ram_3fcb6b7c;
    if (iVar3 == 0) {
      iVar3 = FUN_ram_403a5e02(1,400);
      *piVar1 = iVar3;
      iVar3 = *_DAT_ram_3fcb6b7c;
      if (iVar3 == 0) {
        FUN_ram_403a5e1e(_DAT_ram_3fcb6b7c);
        _DAT_ram_3fcb6b7c = (int *)0x0;
        return 6;
      }
    }
    piVar1 = _DAT_ram_3fcb6b7c;
    piVar4 = _DAT_ram_3fcb6b7c + 8;
    _DAT_ram_3fcb6b7c[8] = 0;
    piVar1[9] = (int)piVar4;
    iVar3 = (*(code *)&SUB_ram_40011a60)(piVar1 + 1,1,400,iVar3," point once tonight.");
    if (iVar3 != 0) {
      FUN_ram_42029290();
      return iVar3;
    }
    puVar2 = (undefined4 *)FUN_ram_403a5e02(1,0x2c);
    _DAT_ram_3fcb6b80 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0x420182b0;
      puVar2[1] = 0x420172dc;
      puVar2[2] = 0x420172cc;
      puVar2[3] = 0x42017292;
      puVar2[4] = 0x4201720c;
      puVar2[5] = 0x42017820;
      puVar2[6] = 0x42017172;
      puVar2[7] = 0x420172ec;
      puVar2[8] = 0x420170ca;
      puVar2[9] = 0x42020fbc;
      puVar2[10] = 0x42021216;
      FUN_ram_420314e0();
      return 0;
    }
    FUN_ram_42029290();
  }
  return 6;
}

