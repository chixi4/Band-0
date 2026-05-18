
void FUN_ram_4202a2a2(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int iVar5;
  undefined1 auStack_21 [5];
  
  iVar5 = FUN_ram_42029616(param_3,4,auStack_21);
  if (iVar5 == 0) {
    puVar3 = (undefined4 *)*param_3;
    uVar1 = *(undefined2 *)(puVar3 + 4);
    uVar4 = *(undefined2 *)*puVar3;
    uVar2 = ((undefined2 *)*puVar3)[1];
    *param_3 = 0;
    (*(code *)&SUB_ram_400119dc)(puVar3,uVar1);
    iVar5 = FUN_ram_4202d5d8(0xd,0,puVar3);
    if (iVar5 == 0) {
      auStack_21[0] = 0x11;
      iVar5 = 6;
    }
    else {
      iVar5 = FUN_ram_42029a16(param_1,uVar4,uVar2,puVar3,auStack_21);
    }
  }
  else {
    uVar4 = 0;
    puVar3 = (undefined4 *)0x0;
  }
  FUN_ram_42029b02(param_1,param_2,iVar5,puVar3,0xc,auStack_21[0],uVar4);
  return;
}

