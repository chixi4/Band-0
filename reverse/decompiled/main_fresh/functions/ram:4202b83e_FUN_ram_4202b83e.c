
void FUN_ram_4202b83e(void)

{
  int *piVar1;
  int iVar2;
  
  FUN_ram_4202b7dc();
  piVar1 = (int *)FUN_ram_4203664e();
  do {
    if (piVar1 == (int *)0x0) {
LAB_ram_4202b85c:
      piVar1 = (int *)FUN_ram_4203664e();
      while ((piVar1 != (int *)0x0 && (iVar2 = FUN_ram_4202b706(piVar1), iVar2 == 0))) {
        piVar1 = (int *)*piVar1;
      }
LAB_ram_4202b864:
      FUN_ram_4202b7f6();
      return;
    }
    if ((*(byte *)(piVar1 + 0xd) & 4) != 0) {
      iVar2 = FUN_ram_4202b706();
      if (iVar2 != 0) goto LAB_ram_4202b864;
      goto LAB_ram_4202b85c;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

