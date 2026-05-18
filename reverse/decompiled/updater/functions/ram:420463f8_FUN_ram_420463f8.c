
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420463f8(undefined4 param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iStack_28;
  undefined1 uStack_24;
  undefined1 uStack_23;
  
  iVar2 = _DAT_ram_3fcb4f84;
  pcVar6 = (code *)_DAT_ram_3fcdfb20[0xf];
  if (_DAT_ram_3fcb4f84 == 0) {
    FUN_ram_42033fd8(1,8,4,0x3c07c898);
    return;
  }
  iVar4 = FUN_ram_42047db4();
  if (iVar4 != 0) {
    FUN_ram_42047dc2(4);
  }
  FUN_ram_42033eb8();
  FUN_ram_42044f76(1);
  FUN_ram_420337c0();
  puVar3 = _DAT_ram_3fcdfb20;
  bVar1 = *(byte *)((int)_DAT_ram_3fcdfb20 + 0x46);
  *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x47) = 0;
  *puVar3 = 0;
  *(byte *)((int)puVar3 + 0x46) = bVar1 & 0xfa;
  *(undefined1 *)(puVar3 + 0x11) = 2;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(puVar3 + 1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(_DAT_ram_3fcdfb20 + 6);
  _DAT_ram_3fcdfb20[0xf] = 0;
  FUN_ram_42033fd8(1,0xc,4,0x3c07c8a4,4);
  FUN_ram_420392fa(4);
  FUN_ram_420454d6(0x100,0x14);
  FUN_ram_42044cc6();
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  uVar5 = _DAT_ram_3fcdfdb4;
  _DAT_ram_3fcdfb20[0x45] = _DAT_ram_3fcdfb20[0x45] | 0x80;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(uVar5);
  FUN_ram_42033fd8(1,8,5,0x3c07f2d8,param_1,param_2,_DAT_ram_6004d000,_DAT_ram_3fcdfb20[0x45],
                   *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0x46));
  FUN_ram_42048bce();
  FUN_ram_40392eec(0xf,1);
  if (pcVar6 == (code *)0x0) {
    FUN_ram_42033fd8(1,8,4,0x3c07c908,param_2,_DAT_ram_3fcb5348);
    uStack_24 = (undefined1)_DAT_ram_3fcb5348;
    uStack_23 = (undefined1)_DAT_ram_3fcdfb20[0x45];
    iStack_28 = param_2;
    FUN_ram_4203bea0(1,&iStack_28,8);
  }
  else {
    if ((undefined1 *)_DAT_ram_3fcdfb20[0x10] == &DAT_ram_3fcb5098) {
      FUN_ram_42033fd8(1,8,5,0x3c07f320);
      puVar3 = _DAT_ram_3fcdfb20;
      *(undefined1 *)((int)_DAT_ram_3fcdfb20 + 0xa3) = 0;
      uVar5 = *(undefined4 *)puVar3[0x10];
    }
    else {
      FUN_ram_42033fd8(1,8,5,0x3c07f33c);
      uVar5 = _DAT_ram_3fcdfb20[0x10];
    }
    (*pcVar6)(uVar5,param_2);
    FUN_ram_4204637e();
    if (DAT_ram_3fcb5220 == '\x01') {
      if (param_2 != 0) {
        return;
      }
      DAT_ram_3fcb5220 = '\0';
    }
    else {
      if (*(char *)(iVar2 + 0x128) != '\x03') {
        return;
      }
      if (param_2 != 0) {
        return;
      }
    }
    iVar4 = FUN_ram_420399ec();
    if (iVar4 != 0) {
      iVar4 = iVar2 + 4;
      if (*(int *)(iVar2 + 0x10) == 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar4);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar4,0x4202d67a,0);
      }
                    /* WARNING: Could not recover jumptable at 0x4204666e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar4,100,0);
      return;
    }
  }
  return;
}

