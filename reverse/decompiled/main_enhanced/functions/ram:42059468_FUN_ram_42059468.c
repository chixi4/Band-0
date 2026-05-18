
uint FUN_ram_42059468(uint param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_3 != (undefined1 *)0x0) && (uVar2 = (*(code *)&SUB_ram_400104a8)(param_3), uVar2 != 0))
  {
    if ((0x42 - param_1 < uVar2) || (0xff < uVar2)) {
LAB_ram_42059496:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    uVar3 = FUN_ram_42058e58(param_1,param_2,0xc,uVar2 & 0xff);
    puVar1 = param_3;
    while (param_1 = uVar3 & 0xffff, puVar1 != param_3 + uVar2) {
      if (param_1 == 0x45) goto LAB_ram_42059496;
      *(undefined1 *)(param_2 + uVar3) = *puVar1;
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  return param_1;
}

