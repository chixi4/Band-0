
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_ram_4039302a(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  FUN_ram_40392b7e();
  for (puVar3 = _DAT_ram_3fcc5264; puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[6]) {
    if ((*(byte *)((int)puVar3 + 0xf) & 2) == 0) {
      uVar1 = puVar3[1];
      uVar2 = *puVar3;
      if ((uVar1 < 0x80000000) && ((uVar1 != 0x7fffffff || (uVar2 != 0xffffffff))))
      goto LAB_ram_4039306c;
      break;
    }
  }
  uVar2 = 0xffffffff;
  uVar1 = 0x7fffffff;
LAB_ram_4039306c:
  FUN_ram_40392b6e();
  FUN_ram_40392b7e();
  puVar3 = _DAT_ram_3fcc5268;
  do {
    if (puVar3 == (uint *)0x0) {
LAB_ram_40393096:
      FUN_ram_40392b6e();
      return CONCAT44(uVar1,uVar2);
    }
    if ((*(byte *)((int)puVar3 + 0xf) & 2) == 0) {
      uVar4 = puVar3[1];
      if ((uVar4 < uVar1) || ((uVar1 == uVar4 && (*puVar3 < uVar2)))) {
        uVar1 = uVar4;
        uVar2 = *puVar3;
      }
      goto LAB_ram_40393096;
    }
    puVar3 = (uint *)puVar3[6];
  } while( true );
}

