
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4039c5c4(int param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iStack_28;
  undefined1 auStack_24 [16];
  
  if (param_2 - param_1 < 0xc) {
    return 0;
  }
  uVar3 = *(ushort *)(param_1 + 8);
  *param_4 = param_1;
  uVar4 = (uint)uVar3 << 10;
  if ((uVar3 == 0) && (uVar4 = 0x19000, DAT_ram_3fcb5381 == '\0')) {
    FUN_ram_42033fd8(6,0x1000,3,0x3c07e9b8);
    FUN_ram_42033fd8(6,0x1000,3,0x3c07e9e4);
    FUN_ram_42033fd8(6,0x1000,3,0x3c07ea20);
    FUN_ram_42033fd8(6,0x1000,3,0x3c07ea68);
  }
  pcVar5 = (char *)(param_1 + 0xc);
  bVar7 = 0;
  while( true ) {
    if ((param_2 - (int)pcVar5 < 2) ||
       (uVar8 = (uint)(byte)pcVar5[1], param_2 - (int)pcVar5 <= (int)(uVar8 + 1)))
    goto LAB_ram_4039c67e;
    if (uVar8 == 0) {
      bVar7 = 1;
    }
    if (*pcVar5 == '\x05') break;
    pcVar5 = pcVar5 + uVar8 + 2;
  }
  *param_3 = (int)pcVar5;
LAB_ram_4039c67e:
  *(byte *)(gp + 0xce) = bVar7 ^ 1;
  if (*param_3 == 0) {
    if (DAT_ram_3fcb5381 != '\0') goto LAB_ram_4039c69e;
    FUN_ram_42033fd8(6,0x1000,3,0x3c07ea98);
    FUN_ram_42033fd8(6,0x1000,3,0x3c07eabc);
    FUN_ram_42033fd8(6,0x1000,3,0x3c07eaf8);
    FUN_ram_42033fd8(6,0x1000,3,0x3c07eb40);
  }
  if (DAT_ram_3fcb5381 == '\0') {
    if (*param_3 != 0) {
      DAT_ram_3fcb537b = *(char *)(*param_3 + 3);
    }
    if (DAT_ram_3fcb537b == '\0') {
      DAT_ram_3fcb537b = '\x01';
    }
    _DAT_ram_3fcb53a4 = uVar4;
    FUN_ram_4039c4dc();
    iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if ((iVar6 != 0) && (DAT_ram_3fcb537f != '\0')) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(uVar4 / 100);
    }
    DAT_ram_3fcb5381 = 1;
    DAT_ram_3fcb5382 = 1;
    FUN_ram_42033fd8(6,0x1000,3,0x3c07eb70,_DAT_ram_3fcb53a4,DAT_ram_3fcb537b);
    return 1;
  }
LAB_ram_4039c69e:
  if (_DAT_ram_3fcb53a4 != uVar4) {
    _DAT_ram_3fcb53a4 = uVar4;
    FUN_ram_4039c4dc();
    iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if ((iVar6 != 0) && (DAT_ram_3fcb537f != '\0')) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(uVar4 / 100);
    }
    DAT_ram_3fcb5382 = 1;
  }
  iVar6 = *param_3;
  if ((iVar6 != 0) &&
     ((cVar2 = *(char *)(iVar6 + 3), cVar2 != DAT_ram_3fcb537b ||
      ((DAT_ram_3fcb5383 != '\0' && (*(char *)(iVar6 + 2) != '\0')))))) {
    bVar1 = cVar2 != DAT_ram_3fcb537b;
    DAT_ram_3fcb537b = cVar2;
    if (bVar1) {
      FUN_ram_4039c4dc();
    }
    iVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if ((((iVar6 == 0) || (DAT_ram_3fcb5545 != '\0')) && (_DAT_ram_3fcb5394 != 0)) &&
       (FUN_ram_4039bc26(&iStack_28,auStack_24), iStack_28 == 0)) {
      DAT_ram_3fcb5382 = 1;
    }
  }
  return 1;
}

