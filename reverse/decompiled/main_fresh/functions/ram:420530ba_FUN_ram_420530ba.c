
uint FUN_ram_420530ba(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  uint uVar4;
  undefined4 uStack_14;
  undefined1 auStack_10 [8];
  undefined1 *puVar3;
  
  puVar2 = auStack_10;
  uVar4 = thunk_FUN_ram_403904a6();
  if (uVar4 == 0) {
    FUN_ram_4205c96c();
    FUN_ram_4205c996();
  }
  else if (uVar4 != (uVar4 + 3 & 0xfffffffc)) {
    pcVar1 = FUN_ram_420530f0;
    uVar4 = FUN_ram_4039bf1e();
    puVar3 = auStack_10;
    if (uVar4 != 0) goto LAB_ram_420530fe;
    do {
      puVar2 = puVar3 + -0x10;
      *(code **)(puVar3 + -4) = pcVar1;
      pcVar1 = (code *)0x420530fe;
      uVar4 = FUN_ram_4039bf1e();
LAB_ram_420530fe:
      puVar3 = puVar2;
    } while (uVar4 != (uVar4 + 3 & 0xfffffffc));
    uVar4 = thunk_FUN_ram_40390634();
    return uVar4;
  }
  return uVar4;
}

