
undefined4 FUN_ram_420263ec(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = param_2 * 4;
  uVar3 = param_4;
  if (uVar1 < param_4) {
    (*(code *)&SUB_ram_40010488)(param_3,0);
    param_3 = param_3 + param_4 + param_2 * -4;
    param_4 = uVar1;
  }
  else {
    for (; uVar3 < uVar1; uVar3 = uVar3 + 1) {
      if ((*(uint *)((uVar3 & 0xfffffffc) + param_1) >> ((uVar3 & 3) << 3) & 0xff) != 0) {
        return 0xfffffff8;
      }
    }
  }
  puVar2 = (undefined1 *)(param_3 + param_4);
  for (uVar3 = 0; puVar2 = puVar2 + -1, param_4 != uVar3; uVar3 = uVar3 + 1) {
    *puVar2 = (char)(*(uint *)((uVar3 & 0xfffffffc) + param_1) >> ((uVar3 & 3) << 3));
  }
  return 0;
}

