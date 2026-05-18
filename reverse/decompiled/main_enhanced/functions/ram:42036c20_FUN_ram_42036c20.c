
int FUN_ram_42036c20(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int aiStack_14 [4];
  
  if (param_1 < 2) {
    iVar2 = FUN_ram_42036ba2(param_1,0,0);
    return iVar2;
  }
  if (1 < (param_1 - 2 & 0xff)) {
    return 3;
  }
  uVar1 = FUN_ram_420315b6();
  iVar2 = FUN_ram_42036ba2(uVar1,0,aiStack_14);
  if ((iVar2 == 0) && (iVar2 = 0, aiStack_14[0] != 0)) {
    iVar2 = 0x15;
  }
  return iVar2;
}

