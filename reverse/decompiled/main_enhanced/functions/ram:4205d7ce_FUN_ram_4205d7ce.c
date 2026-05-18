
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205d7ce(void)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int *piVar3;
  int unaff_s3;
  
  iVar2 = FUN_ram_4205409c();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_ram_420531dc(5);
    iVar1 = _DAT_ram_3fcc26b8;
    if (piVar3 == (int *)0x0) {
      FUN_ram_42053ac4(iVar2);
    }
    else {
      *piVar3 = iVar2;
      piVar3[1] = iVar2;
      piVar3[2] = iVar1;
      *(ushort *)(piVar3 + 3) = (ushort)*(byte *)(unaff_s3 + 0x10);
      iVar2 = FUN_ram_4205c7fc(unaff_s1 + 0x10,piVar3);
      if (iVar2 == 0) {
        if (*(code **)(unaff_s1 + 0x30) != (code *)0x0) {
          (**(code **)(unaff_s1 + 0x30))();
        }
      }
      else {
        FUN_ram_4205e6e8(piVar3);
      }
    }
  }
  return 0;
}

