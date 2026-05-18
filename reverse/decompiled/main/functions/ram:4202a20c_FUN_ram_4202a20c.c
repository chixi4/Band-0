
void FUN_ram_4202a20c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 auStack_21 [9];
  
  iVar4 = FUN_ram_42029616(param_3,2,auStack_21);
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)*param_3;
    uVar1 = *(undefined2 *)(puVar2 + 4);
    uVar3 = *(undefined2 *)*puVar2;
    *param_3 = 0;
    (*(code *)&SUB_ram_400119dc)(puVar2,uVar1);
    iVar4 = FUN_ram_4202d5d8(0xb,0,puVar2);
    if (iVar4 == 0) {
      auStack_21[0] = 0x11;
      iVar4 = 6;
    }
    else {
      iVar4 = FUN_ram_42029a16(param_1,uVar3,0,puVar2,auStack_21);
    }
  }
  else {
    uVar3 = 0;
    puVar2 = (undefined4 *)0x0;
  }
  FUN_ram_42029b02(param_1,param_2,iVar4,puVar2,10,auStack_21[0],uVar3);
  return;
}

