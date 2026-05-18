
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4201da44(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_a0 [32];
  undefined4 auStack_80 [12];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  
  iVar2 = FUN_ram_4201605e();
  if (_DAT_ram_3fcc50e4 < 4) {
    if ((_DAT_ram_3fcc50e4 != 1) || (FUN_ram_4201eeb2(), DAT_ram_3fcc50de == '\0')) {
LAB_ram_4201da70:
      FUN_ram_4201eeb2(1);
      FUN_ram_4201d0f4(param_1,100,0x3fcbb23c,0);
      return;
    }
    iVar3 = FUN_ram_42021324(0x3fcc50d8,4);
    uVar5 = 4;
    if (0x8c < iVar3) {
      iVar3 = FUN_ram_42021324(0x3fcc50d8,3);
      uVar5 = 3;
    }
    iVar1 = (200 - iVar3) / 2;
    FUN_ram_4201cfa4(param_1,iVar1 + -6,iVar1 + -0x14,iVar3 + 0xc,iVar3 + 0xc,6);
    FUN_ram_4202120e(0x3fcc50d8,param_1,iVar1,iVar1 + -0xe,uVar5);
    FUN_ram_42021f44(auStack_a0,0x20);
    if (iVar2 == 0) {
      (*(code *)&SUB_ram_400106ac)(auStack_80,0x30,0x3c0a8d38);
      uVar5 = 0x3c0a8d44;
    }
    else {
      (*(code *)&SUB_ram_400106ac)(auStack_80,0x30,0x3c0a8d50,auStack_a0);
      uVar5 = 0x3c0a8d5c;
    }
    (*(code *)&SUB_ram_400106ac)(&uStack_50,0x30,uVar5,0x3c0a8cec);
    FUN_ram_4201f3fe(0xa2,auStack_80,0);
    puVar4 = &uStack_50;
    uVar5 = 0xb4;
  }
  else {
    if (_DAT_ram_3fcc50e4 != 4) {
      if (_DAT_ram_3fcc50e4 != 5) {
        return;
      }
      goto LAB_ram_4201da70;
    }
    FUN_ram_4201eeb2(1);
    FUN_ram_4201d0f4(param_1,0x1e,0x3fcbb23c,0);
    iVar2 = FUN_ram_42018bea(&uStack_50);
    if (iVar2 != 0) {
      return;
    }
    (*(code *)&SUB_ram_400106ac)
              (auStack_a0,0x20,"n risks first.",iStack_3c + 0x76c,iStack_40 + 1,uStack_44);
    (*(code *)&SUB_ram_400106ac)(auStack_80,0x20,&DAT_ram_3c0c142c,uStack_48,uStack_4c,uStack_50);
    FUN_ram_4201f3fe(0x5a,auStack_a0,0);
    puVar4 = auStack_80;
    uVar5 = 0x73;
  }
  FUN_ram_4201f3fe(uVar5,puVar4,0);
  return;
}

