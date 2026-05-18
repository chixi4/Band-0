
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420332b4(uint param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  
  FUN_ram_42033240();
  iVar2 = FUN_ram_42036a74(param_1,param_2,param_3);
  iVar4 = _DAT_ram_3fcb6bc4;
  if (iVar2 != 0) goto LAB_ram_42033320;
  uVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(2000);
  iVar4 = (**(code **)(_DAT_ram_3fcb6a44 + 0x54))(iVar4 + 4,uVar3);
  if (iVar4 == 0) {
    pcVar5 = *(char **)(_DAT_ram_3fcb6bc4 + 0x84);
    if (*pcVar5 == '\x0e') {
      uVar6 = (uint)(byte)pcVar5[1];
      if (uVar6 < 4) {
        if ((uVar6 != 3) || (uVar1 = 0, *(short *)(pcVar5 + 3) != 0)) goto LAB_ram_42033384;
LAB_ram_42033396:
        iVar4 = 0;
        if (param_1 != uVar1) goto LAB_ram_42033384;
      }
      else {
        uVar1 = (uint)*(ushort *)(pcVar5 + 3);
        if ((byte)pcVar5[5] != 0) {
          iVar2 = (byte)pcVar5[5] + 0x200;
        }
        iVar4 = uVar6 - 4;
        if ((iVar4 == 0) || (param_4 == 0)) goto LAB_ram_42033396;
        if (param_5 < iVar4) {
          iVar7 = 0xc;
          iVar4 = param_5;
        }
        else {
          iVar7 = 0;
        }
        FUN_ram_4039c11e(param_4,pcVar5 + 6,iVar4);
        if ((param_1 != uVar1) || (iVar7 != 0)) goto LAB_ram_42033384;
      }
      if ((iVar2 == 0) && (param_5 != iVar4)) {
        FUN_ram_4202bb54(0xc);
        iVar2 = 0xc;
      }
      goto LAB_ram_42033320;
    }
    if (*pcVar5 != '\x0f') {
      iVar2 = 0x11;
      goto LAB_ram_4203331a;
    }
    if (pcVar5[1] == '\x04') {
      uVar1 = (uint)*(ushort *)(pcVar5 + 4);
      if ((byte)pcVar5[2] != 0) {
        iVar2 = (byte)pcVar5[2] + 0x200;
      }
      goto LAB_ram_42033396;
    }
LAB_ram_42033384:
    iVar2 = 0xc;
  }
  else {
    iVar2 = 0x13;
    if (iVar4 != 6) {
      iVar2 = 0xb;
    }
  }
LAB_ram_4203331a:
  FUN_ram_4202bb54(iVar2);
LAB_ram_42033320:
  if (*(int *)(_DAT_ram_3fcb6bc4 + 0x84) != 0) {
    thunk_EXT_FUN_ram_40010ae8();
    *(undefined4 *)(_DAT_ram_3fcb6bc4 + 0x84) = 0;
  }
  FUN_ram_4203322c();
  return iVar2;
}

