
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42016d9a(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iStack_d8;
  undefined1 auStack_d4 [27];
  undefined1 uStack_b9;
  undefined1 auStack_b8 [16];
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined4 uStack_48;
  
  if (param_1 == (char *)0x0) {
    return 0x102;
  }
  if (*param_1 == '\0') {
    return 0x102;
  }
  if (param_3 == 0) {
    param_3 = 20000;
  }
  if (DAT_ram_3fcb6696 == '\0') {
    iVar1 = FUN_ram_4201d5c2();
    if ((iVar1 == 0x110d) || (iVar1 == 0x1110)) {
      FUN_ram_4201db16();
      iVar1 = FUN_ram_4201d5c2();
    }
    if (((iVar1 != 0) || (iVar1 = FUN_ram_42021614(), iVar1 != 0)) ||
       ((iVar1 = FUN_ram_42079758(), iVar1 != 0x103 && (iVar1 != 0)))) goto LAB_ram_42016ffe;
    iVar1 = FUN_ram_4202317a();
    if (iVar1 != 0) {
      iStack_d8 = gp + -0x49c;
      FUN_ram_40399daa(auStack_d4,0x3c0758e0,0x2c);
      uStack_a8 = 4;
      uStack_a4 = 8;
      uStack_98 = 8;
      uStack_90 = 5;
      uStack_70 = 6;
      uStack_68 = 0x2f0;
      uStack_64 = 0x20;
      uStack_5c = 0;
      uStack_54 = 2;
      uStack_a0 = 1;
      uStack_9c = 0;
      uStack_94 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      uStack_84 = 1;
      uStack_80 = 1;
      uStack_7c = 0;
      uStack_78 = 1;
      uStack_74 = 1;
      uStack_6c = 0;
      uStack_60 = 1;
      uStack_58 = 1;
      uStack_50 = 1;
      uStack_4c = 0;
      uStack_48 = 0x1f2f3f4f;
      iVar1 = FUN_ram_42022e0c(&iStack_d8);
      if (((iVar1 != 0) ||
          (iVar1 = FUN_ram_420796fc(_DAT_ram_3c07590c,0xffffffff,0x42006c78,0,0), iVar1 != 0)) ||
         (iVar1 = FUN_ram_420796fc(_DAT_ram_3c0758dc,0,0x42006c78,0,0), iVar1 != 0))
      goto LAB_ram_42016ffe;
      _DAT_ram_3fcb669c = FUN_ram_40395afe();
      if (_DAT_ram_3fcb669c != 0) {
        DAT_ram_3fcb6696 = '\x01';
        goto LAB_ram_42016ef8;
      }
    }
    iVar1 = 0x101;
LAB_ram_42016ffe:
    uVar2 = FUN_ram_40398d1c();
    uVar4 = FUN_ram_4201ae60(iVar1);
    FUN_ram_40398c14(1,0x3c070ea8,0x3c070f38,uVar2,0x3c070ea8,uVar4);
    return iVar1;
  }
LAB_ram_42016ef8:
  _DAT_ram_3fcb6698 = 0;
  FUN_ram_40395bee(_DAT_ram_3fcb669c,3);
  (*(code *)&SUB_ram_40010488)(&uStack_b9,0,0x99);
  FUN_ram_4039a252(&iStack_d8,param_1,0x1f);
  if (param_2 != (char *)0x0) {
    FUN_ram_4039a252(auStack_b8,param_2,0x3f);
    uStack_60 = 3;
    if (*param_2 != '\0') goto LAB_ram_42016f50;
  }
  uStack_60 = 0;
LAB_ram_42016f50:
  uStack_58 = 1;
  iVar1 = FUN_ram_4203cd22(1);
  if (((iVar1 == 0) && (iVar1 = FUN_ram_4203d008(0,&iStack_d8), iVar1 == 0)) &&
     (iVar1 = FUN_ram_4203cd72(), iVar1 == 0)) {
    uVar2 = FUN_ram_40398d1c();
    FUN_ram_40398c14(3,0x3c070ea8,0x3c070f58,uVar2,0x3c070ea8,param_1);
    uVar3 = FUN_ram_40395b28(_DAT_ram_3fcb669c,3,0,0,(uint)(param_3 * 100) / 1000);
    if (((uVar3 & 1) == 0) && (iVar1 = 0x3007, (uVar3 & 2) == 0)) {
      uVar2 = FUN_ram_40398d1c();
      FUN_ram_40398c14(1,0x3c070ea8,0x3c070f7c,uVar2,0x3c070ea8,param_3);
      iVar1 = 0x107;
    }
  }
  return iVar1;
}

