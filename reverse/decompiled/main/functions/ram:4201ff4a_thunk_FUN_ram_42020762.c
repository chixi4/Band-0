
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_42020762(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  FUN_ram_4202064c();
  uVar4 = param_3;
  if (param_2 <= param_3) {
    uVar4 = param_2;
    param_2 = param_3;
  }
  uVar3 = param_5;
  if (param_4 <= param_5) {
    uVar3 = param_4;
    param_4 = param_5;
  }
  uVar2 = param_2 & 0xff;
  if (199 < param_2) {
    uVar2 = 199;
  }
  uVar5 = param_4 & 0xff;
  if (199 < param_4) {
    uVar5 = 199;
  }
  FUN_ram_420201a0(param_1,0x3fcbb44c);
  uVar1 = uVar4;
  if (uVar4 <= uVar2) {
    uVar1 = uVar2;
    uVar2 = uVar4;
  }
  uVar4 = uVar3;
  if (uVar3 <= uVar5) {
    uVar4 = uVar5;
    uVar5 = uVar3;
  }
  uVar3 = uVar2 >> 3 & 0xff;
  uVar2 = uVar1 >> 3 & 0xff;
  if (uVar3 == uVar2) {
    if (uVar3 == 0x18) {
      uVar3 = 0x17;
    }
    else {
      uVar2 = uVar3 + 1 & 0xff;
    }
  }
  if (uVar5 == uVar4) {
    if (uVar5 == 199) {
      uVar5 = 0xc6;
    }
    else {
      uVar4 = uVar5 + 1 & 0xff;
    }
  }
  FUN_ram_4201fe48(0x90);
  FUN_ram_4201fe50((uVar3 & 0x1f) << 3);
  FUN_ram_4201fe50((uVar2 & 0x1f) << 3 | 7);
  FUN_ram_4201fe50(uVar5);
  FUN_ram_4201fe50(uVar4);
  FUN_ram_4201fe50(1);
  FUN_ram_4201fe48(0x91);
  FUN_ram_4202009e(0x3fcbb44c,_DAT_ram_3fcc5148,uVar3,uVar2,uVar5,uVar4);
  FUN_ram_4202034e();
  FUN_ram_4201fe48(0x92);
  FUN_ram_4201ff52(0x3fcbb44c,uVar3,uVar2,uVar5,uVar4);
  return;
}

