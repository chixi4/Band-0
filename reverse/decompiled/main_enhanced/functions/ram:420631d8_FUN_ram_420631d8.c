
undefined4 FUN_ram_420631d8(int *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iStack_28;
  uint auStack_24 [3];
  
  if (param_1 == (int *)0x0) {
    return 0x102;
  }
  if ((param_2 != (undefined4 *)0x0) && (*param_1 == 0)) {
    if ((param_1[1] != 0) && (param_1[1] != 3)) {
      return 0x106;
    }
    if ((param_1[2] == 0xc) || (param_1[2] == 0)) {
      cVar1 = FUN_ram_42096a8c();
      if (cVar1 != '\x01') {
        return 0x106;
      }
      puVar2 = (undefined4 *)FUN_ram_403905a0(1,8,0x804);
      if (puVar2 != (undefined4 *)0x0) {
        piVar3 = (int *)FUN_ram_403905a0(1,0x10,0x804);
        if (piVar3 != (int *)0x0) {
          iVar4 = *param_1;
          iVar5 = param_1[1];
          *puVar2 = 0x420531c6;
          puVar2[1] = piVar3;
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          iStack_28 = 0;
          auStack_24[0] = 0;
          iVar4 = FUN_ram_42096b4a(1,iVar4,iVar5,auStack_24,&iStack_28);
          if (iVar4 == 0) {
            piVar3[3] = 0;
            piVar3[2] = (uint)(iStack_28 << 0x10) / auStack_24[0];
            *param_2 = puVar2;
            return 0;
          }
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf9e(0,0,0,0);
        }
        thunk_FUN_ram_40390634(puVar2);
      }
      return 0x101;
    }
  }
  return 0x102;
}

