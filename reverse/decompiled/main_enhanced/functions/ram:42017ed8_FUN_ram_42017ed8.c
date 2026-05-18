
void FUN_ram_42017ed8(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char acStack_ec [32];
  undefined1 uStack_cc;
  undefined1 auStack_c8 [192];
  
  if (param_1 == 6) {
    iVar1 = FUN_ram_4201605e();
    if (iVar1 == 0) {
      uVar3 = 0x3c0a8bf8;
      uVar2 = 0x3c0a8c08;
    }
    else {
      uVar3 = 0x3c0a8c18;
      uVar2 = 0x3c0a8c28;
    }
    FUN_ram_42017d0c(uVar2,uVar3);
    iVar1 = FUN_ram_42018be0();
    if (iVar1 != 1) {
      FUN_ram_42018a9e(0x42007e60,15000);
      return;
    }
  }
  else if (param_1 < 7) {
    if (param_1 == 5) {
      (*(code *)&SUB_ram_40010488)(auStack_c8,0,0xb8);
      (*(code *)&SUB_ram_40010488)(acStack_ec,0,0x21);
      iVar1 = FUN_ram_42084bda(0,auStack_c8);
      if (iVar1 == 0) {
        FUN_ram_4039c61e(acStack_ec,auStack_c8,0x20);
        uStack_cc = 0;
      }
      iVar1 = FUN_ram_4201605e();
      if (iVar1 == 0) {
        pcVar4 = acStack_ec;
        if (acStack_ec[0] == '\0') {
          pcVar4 = (char *)0x3c0a8ba8;
        }
        uVar2 = 0x3c0a8bc8;
      }
      else {
        pcVar4 = acStack_ec;
        if (acStack_ec[0] == '\0') {
          pcVar4 = (char *)0x3c0a8bb8;
        }
        uVar2 = 0x3c0a8be4;
      }
      FUN_ram_42017d0c(uVar2,pcVar4);
    }
  }
  else if ((((param_1 - 7 < 2) && (DAT_ram_3fcc4fd8 == '\0')) &&
           (iVar1 = FUN_ram_42018be0(), iVar1 != 2)) && (iVar1 = FUN_ram_42018be0(), iVar1 != 1)) {
    iVar1 = FUN_ram_4201605e();
    if (iVar1 == 0) {
      uVar3 = 0x3c0a8b64;
      uVar2 = 0x3c0a8c38;
    }
    else {
      uVar3 = 0x3c0a8b8c;
      uVar2 = 0x3c0a8c4c;
    }
    FUN_ram_42017d0c(uVar2,uVar3);
    FUN_ram_42017dd8(2000);
    return;
  }
  return;
}

