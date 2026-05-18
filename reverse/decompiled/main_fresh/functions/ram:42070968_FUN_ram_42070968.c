
int FUN_ram_42070968(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,
                    int *param_5)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [56];
  
  FUN_ram_4039c11e(auStack_68,"n your head gets noisy.",0x36);
  if (((((param_4 == (int *)0x0) || (param_5 == (int *)0x0)) || (*param_4 != 0)) ||
      (((*param_5 != 0 || (iVar2 = FUN_ram_420685b4(param_1,0), iVar2 < 1)) ||
       ((iVar2 = FUN_ram_420685b4(param_3,1), iVar2 < 1 ||
        ((iVar2 = FUN_ram_42068514(param_3,param_1), -1 < iVar2 ||
         (iVar2 = FUN_ram_420685b4(param_2,1), iVar2 < 1)))))))) ||
     (iVar2 = FUN_ram_42068514(param_2,param_1), -1 < iVar2)) {
    return -4;
  }
  FUN_ram_4206806e(auStack_70);
  FUN_ram_4206806e(auStack_78);
  iVar2 = FUN_ram_42068852(auStack_78,param_3,param_2);
  if ((iVar2 == 0) && (iVar2 = FUN_ram_42068824(auStack_78,auStack_78,1), iVar2 == 0)) {
    uVar1 = FUN_ram_42068380(auStack_78);
    if (uVar1 != 0) {
      iVar2 = FUN_ram_42068484(auStack_78,uVar1);
      if (iVar2 != 0) goto LAB_ram_42070a52;
      uVar3 = (uint)((*(uint *)*param_1 & 7) == 1);
      do {
        iVar2 = FUN_ram_42068310(auStack_70,auStack_68[uVar3]);
        if ((iVar2 != 0) || (iVar2 = FUN_ram_420690fa(param_4,0,auStack_70,param_1), iVar2 != 0))
        goto LAB_ram_42070a52;
        iVar2 = FUN_ram_420685b4(param_4,1);
        if (iVar2 == 0) {
          iVar2 = FUN_ram_420690e0(auStack_70,auStack_70,auStack_78,param_1,param_5);
          if (iVar2 != 0) goto LAB_ram_42070a52;
          uVar4 = 1;
          do {
            iVar2 = FUN_ram_420685b4(auStack_70,1);
            if (iVar2 == 0) break;
            iVar2 = FUN_ram_420687f6(auStack_70,auStack_70,1);
            if ((iVar2 != 0) || (iVar2 = FUN_ram_420690fa(param_4,0,auStack_70,param_1), iVar2 != 0)
               ) goto LAB_ram_42070a52;
            iVar2 = FUN_ram_420685b4(param_4,1);
            if ((iVar2 == 1) && (iVar2 = FUN_ram_42068514(param_4,param_1), iVar2 == -1)) {
              iVar2 = FUN_ram_420689c6(param_5,0,param_1,param_4);
              goto LAB_ram_42070a52;
            }
            iVar2 = FUN_ram_42068824(auStack_70,auStack_70,1);
            if (((iVar2 != 0) || (iVar2 = FUN_ram_42068852(auStack_70,auStack_70), iVar2 != 0)) ||
               (iVar2 = FUN_ram_42068da0(auStack_70,auStack_70,param_1), iVar2 != 0))
            goto LAB_ram_42070a52;
            uVar4 = uVar4 + 1;
          } while (uVar4 <= uVar1);
          iVar2 = FUN_ram_420685b4(auStack_70,1);
          if (iVar2 != 0) break;
        }
        uVar3 = uVar3 + 1;
      } while ((uVar3 & 0xffff) != 0x36);
    }
    iVar2 = -4;
  }
LAB_ram_42070a52:
  FUN_ram_42068078(auStack_70);
  FUN_ram_42068078(auStack_78);
  return iVar2;
}

