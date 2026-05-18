
undefined4 FUN_ram_4202636e(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 * 4;
  uVar1 = param_4;
  uVar3 = uVar2;
  if (param_4 <= uVar2) {
    for (; uVar3 = param_4, uVar1 < uVar2; uVar1 = uVar1 + 1) {
      if ((*(uint *)((uVar1 & 0xfffffffc) + param_1) >> ((uVar1 & 3) << 3) & 0xff) != 0) {
        return 0xfffffff8;
      }
    }
  }
  for (uVar1 = 0; uVar3 != uVar1; uVar1 = uVar1 + 1) {
    *(char *)(param_3 + uVar1) =
         (char)(*(uint *)((uVar1 & 0xfffffffc) + param_1) >> ((uVar1 & 3) << 3));
  }
  if (param_4 <= uVar2) {
    return 0;
  }
  (*(code *)&SUB_ram_40010488)(param_3 + uVar2,0,param_4 + param_2 * -4);
  return 0;
}

