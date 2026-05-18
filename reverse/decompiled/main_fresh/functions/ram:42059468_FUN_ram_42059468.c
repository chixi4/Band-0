
uint FUN_ram_42059468(uint param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  if ((param_3 != (undefined1 *)0x0) &&
     (puVar1 = (undefined1 *)(*(code *)&SUB_ram_400104a8)(param_3), puVar1 != (undefined1 *)0x0)) {
    puVar2 = puVar1;
    if (puVar1 <= (undefined1 *)(0x42 - param_1)) goto LAB_ram_4205949e;
    do {
      do {
        puVar2 = (undefined1 *)FUN_ram_4039bf1e();
LAB_ram_4205949e:
      } while ((undefined1 *)0xff < puVar2);
      uVar3 = FUN_ram_42058e58(param_1,param_2,0xc,(uint)puVar2 & 0xff);
      puVar1 = puVar1 + (int)param_3;
      puVar2 = param_3;
      while( true ) {
        param_1 = uVar3 & 0xffff;
        if (puVar2 == puVar1) {
          return param_1;
        }
        param_3 = puVar2 + 1;
        if (param_1 == 0x45) break;
        *(undefined1 *)(param_2 + uVar3) = *puVar2;
        uVar3 = uVar3 + 1;
        puVar2 = param_3;
      }
    } while( true );
  }
  return param_1;
}

