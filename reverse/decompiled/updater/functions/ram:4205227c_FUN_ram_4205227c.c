
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205227c(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  iVar4 = FUN_ram_42059006(_DAT_ram_3fcb5e68,_DAT_ram_3fcb5e54);
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 9);
  uVar5 = 0;
  piVar2 = _DAT_ram_3fcb67b4;
  piVar7 = (int *)0x0;
  do {
    piVar3 = piVar2;
    if (piVar3 == (int *)0x0) {
      return uVar5;
    }
    if (((char)piVar3[4] == cVar1) &&
       (((char)piVar3[2] == '\0' ||
        ((char)piVar3[2] == (char)(*(char *)(_DAT_ram_3fcb5e58 + 0x3c) + '\x01'))))) {
      iVar6 = *piVar3;
      if (iVar4 == 0) {
        if ((iVar6 == 0) || (_DAT_ram_3fcb5e68 == iVar6)) goto LAB_ram_420522e8;
      }
      else if (iVar6 == 0) {
LAB_ram_420522e8:
        if ((((*(byte *)((int)piVar3 + 0x11) & 1) == 0) || (piVar3[1] == _DAT_ram_3fcb5e64)) &&
           ((code *)piVar3[5] != (code *)0x0)) {
          iVar6 = (*(code *)piVar3[5])(piVar3[6],piVar3,param_1,&DAT_ram_3fcb5e64);
          if (iVar6 != 0) {
            if (piVar7 != (int *)0x0) {
              piVar7[3] = piVar3[3];
              piVar3[3] = (int)_DAT_ram_3fcb67b4;
              _DAT_ram_3fcb67b4 = piVar3;
            }
            return 1;
          }
          uVar5 = 2;
        }
      }
    }
    piVar2 = (int *)piVar3[3];
    piVar7 = piVar3;
  } while( true );
}

