
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42026c62(int param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char *unaff_s0;
  int unaff_s1;
  undefined2 uVar3;
  int iVar4;
  
  if (param_1 == 0x2a31) {
    if ((*unaff_s0 != '\0') || (unaff_s1 != 0xffff)) goto LAB_ram_42026c80;
    iVar4 = FUN_ram_403a3150(*(undefined4 *)(unaff_s0 + 4),_DAT_ram_3fcb6b74 + 2,1);
    if (iVar4 != 0) {
      return 0x11;
    }
  }
  else {
    if ((param_1 != 0x2a4f) || (*unaff_s0 != '\x01')) {
LAB_ram_42026c80:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    if (*(short *)(*(int *)(unaff_s0 + 4) + 0x10) != 4) {
      return 0xd;
    }
    iVar4 = FUN_ram_4202d538(*(int *)(unaff_s0 + 4),&stack0x0000000c,4,0);
    puVar1 = _DAT_ram_3fcb6b74;
    if (iVar4 != 0) {
      return 0xe;
    }
    uVar3 = (*(code *)&SUB_ram_40011938)(&stack0x0000000c);
    *puVar1 = uVar3;
    puVar1 = _DAT_ram_3fcb6b74;
    uVar3 = (*(code *)&SUB_ram_40011938)(&stack0x0000000e);
    puVar2 = _DAT_ram_3fcb6b74;
    puVar1[1] = uVar3;
    if (*(code **)(puVar2 + 4) != (code *)0x0) {
      (**(code **)(puVar2 + 4))(*puVar2,puVar2[1]);
    }
  }
  return 0;
}

