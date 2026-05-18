
void FUN_ram_42017e60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 == 2) {
    iVar1 = FUN_ram_4201605e();
    if (iVar1 == 0) {
      uVar2 = 0x3c0a8b48;
    }
    else {
      uVar2 = 0x3c0a8b58;
    }
    FUN_ram_42017d0c(uVar2,&DAT_ram_3c0c39bc);
    uVar2 = 700;
  }
  else {
    if (param_1 != 3) {
      return;
    }
    iVar1 = FUN_ram_4201605e();
    if (iVar1 == 0) {
      uVar3 = 0x3c0a8b64;
      uVar2 = 0x3c0a8b7c;
    }
    else {
      uVar3 = 0x3c0a8b8c;
      uVar2 = 0x3c0a8b9c;
    }
    FUN_ram_42017d0c(uVar2,uVar3);
    uVar2 = 2000;
  }
  FUN_ram_42017dd8(uVar2);
  return;
}

