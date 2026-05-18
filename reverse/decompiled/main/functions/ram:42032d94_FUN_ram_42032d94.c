
int FUN_ram_42032d94(char *param_1,int param_2,byte *param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  byte bVar5;
  char cStack_2a;
  byte bStack_29;
  undefined2 local_28 [3];
  undefined1 uStack_22;
  
  bStack_29 = 0;
  if (((((*param_1 == '\0') ||
        (iVar1 = FUN_ram_42032b7e(1,1,param_1,param_2,&bStack_29,param_4,param_5), iVar1 == 0)) &&
       ((*(int *)(param_1 + 4) == 0 ||
        ((param_1[8] == '\0' ||
         (iVar1 = FUN_ram_42032c94((param_1[9] & 1U) + 2,param_1[8],*(int *)(param_1 + 4),param_2,
                                   &bStack_29,param_4,param_5), iVar1 == 0)))))) &&
      ((*(int *)(param_1 + 0xc) == 0 ||
       ((param_1[0x10] == '\0' ||
        (iVar1 = FUN_ram_42032c06((param_1[0x11] & 1U) + 4,param_1[0x10],*(int *)(param_1 + 0xc),
                                  param_2,&bStack_29,param_4,param_5), iVar1 == 0)))))) &&
     (((*(int *)(param_1 + 0x14) == 0 ||
       ((param_1[0x18] == '\0' ||
        (iVar1 = FUN_ram_42032d16((param_1[0x19] & 1U) + 6,param_1[0x18],*(int *)(param_1 + 0x14),
                                  param_2,&bStack_29,param_4,param_5), iVar1 == 0)))) &&
      ((*(int *)(param_1 + 0x1c) == 0 ||
       ((param_1[0x20] == '\0' ||
        (iVar1 = FUN_ram_42032b7e((param_1[0x21] & 1U) + 8,param_1[0x20],*(int *)(param_1 + 0x1c),
                                  param_2,&bStack_29,param_4,param_5), iVar1 == 0)))))))) {
    if ((param_1[0x23] & 1U) != 0) {
      cStack_2a = param_1[0x22];
      iVar1 = FUN_ram_42032b7e(10,1,&cStack_2a,param_2,&bStack_29,param_4,param_5);
      if (iVar1 != 0) {
        return iVar1;
      }
    }
    if ((((((param_1[0x2c] & 1U) == 0) ||
          (iVar1 = FUN_ram_42032b7e(0x10,0x10,*(undefined4 *)(param_1 + 0x28),param_2,&bStack_29,
                                    param_4,param_5), iVar1 == 0)) &&
         (((param_1[0x2e] & 1U) == 0 ||
          (iVar1 = FUN_ram_42032b7e(0x11,1,param_1 + 0x2d,param_2,&bStack_29,param_4,param_5),
          iVar1 == 0)))) &&
        ((((*(int *)(param_1 + 0x24) == 0 ||
           (iVar1 = FUN_ram_42032b7e(0x12,4,*(int *)(param_1 + 0x24),param_2,&bStack_29,param_4,
                                     param_5), iVar1 == 0)) &&
          ((*(int *)(param_1 + 0x30) == 0 ||
           (iVar1 = FUN_ram_42032c94(0x14,param_1[0x34],*(int *)(param_1 + 0x30),param_2,&bStack_29,
                                     param_4,param_5), iVar1 == 0)))) &&
         (((*(int *)(param_1 + 0x38) == 0 ||
           (iVar1 = FUN_ram_42032d16(0x15,param_1[0x3c],*(int *)(param_1 + 0x38),param_2,&bStack_29,
                                     param_4,param_5), iVar1 == 0)) &&
          ((*(int *)(param_1 + 0x40) == 0 ||
           ((param_1[0x44] == '\0' ||
            (iVar1 = FUN_ram_42032b7e(0x16,param_1[0x44],*(int *)(param_1 + 0x40),param_2,&bStack_29
                                      ,param_4,param_5), iVar1 == 0)))))))))) &&
       (((*(int *)(param_1 + 0x48) == 0 ||
         (((byte)param_1[0x4c] == 0 ||
          (iVar1 = FUN_ram_42032b7e(0x17,(uint)(byte)param_1[0x4c] * 6,*(int *)(param_1 + 0x48),
                                    param_2,&bStack_29,param_4,param_5), iVar1 == 0)))) &&
        (((*(int *)(param_1 + 0x50) == 0 ||
          (((byte)param_1[0x54] == 0 ||
           (iVar1 = FUN_ram_42032b7e(0x18,(uint)(byte)param_1[0x54] * 6,*(int *)(param_1 + 0x50),
                                     param_2,&bStack_29,param_4,param_5), iVar1 == 0)))) &&
         (((param_1[0x58] & 1U) == 0 ||
          (iVar1 = FUN_ram_42032b7e(0x19,2,param_1 + 0x56,param_2,&bStack_29,param_4,param_5),
          iVar1 == 0)))))))) {
      if ((param_1[0x5c] & 1U) != 0) {
        iVar1 = FUN_ram_42032b0c(0x1a,2,param_4,param_2,&bStack_29,param_5);
        if (iVar1 != 0) {
          return iVar1;
        }
        if (param_5 == 0) {
          bVar5 = bStack_29 + 2;
          (*(code *)&SUB_ram_40011aac)(param_2 + (uint)bStack_29);
          bStack_29 = bVar5;
        }
        else {
          local_28[0] = *(undefined2 *)(param_1 + 0x5a);
          iVar1 = FUN_ram_403a3150(param_5,local_28,2);
          if (iVar1 != 0) {
            return iVar1;
          }
        }
      }
      iVar1 = *(int *)(param_1 + 0x60);
      iVar4 = 0;
      if (iVar1 != 0) {
        do {
          puVar2 = (undefined1 *)(iVar1 + iVar4);
          puVar3 = (undefined1 *)((int)local_28 + iVar4);
          iVar4 = iVar4 + 1;
          *puVar3 = *puVar2;
        } while (iVar4 != 6);
        uStack_22 = (undefined1)*(undefined4 *)(param_1 + 100);
        iVar1 = FUN_ram_42032b7e(0x1b,7,local_28,param_2,&bStack_29,param_4,param_5);
        if (iVar1 != 0) {
          return iVar1;
        }
      }
      if ((((((((param_1[0x72] & 1U) == 0) ||
              (iVar1 = FUN_ram_42032b7e(0x1c,1,param_1 + 0x71,param_2,&bStack_29,param_4,param_5),
              iVar1 == 0)) &&
             ((*(int *)(param_1 + 0x6c) == 0 ||
              ((param_1[0x70] == '\0' ||
               (iVar1 = FUN_ram_42032c06(0x1f,param_1[0x70],*(int *)(param_1 + 0x6c),param_2,
                                         &bStack_29,param_4,param_5), iVar1 == 0)))))) &&
            ((*(int *)(param_1 + 0x74) == 0 ||
             ((param_1[0x78] == '\0' ||
              (iVar1 = FUN_ram_42032b7e(0x20,param_1[0x78],*(int *)(param_1 + 0x74),param_2,
                                        &bStack_29,param_4,param_5), iVar1 == 0)))))) &&
           ((*(int *)(param_1 + 0x7c) == 0 ||
            ((param_1[0x80] == '\0' ||
             (iVar1 = FUN_ram_42032b7e(0x21,param_1[0x80],*(int *)(param_1 + 0x7c),param_2,
                                       &bStack_29,param_4,param_5), iVar1 == 0)))))) &&
          ((*(int *)(param_1 + 0x84) == 0 ||
           ((param_1[0x88] == '\0' ||
            (iVar1 = FUN_ram_42032b7e(0x24,param_1[0x88],*(int *)(param_1 + 0x84),param_2,&bStack_29
                                      ,param_4,param_5), iVar1 == 0)))))) &&
         ((((*(int *)(param_1 + 0x90) == 0 ||
            (iVar1 = FUN_ram_42032b7e(0x27,6,param_1 + 0x89,param_2,&bStack_29,param_4,param_5),
            iVar1 == 0)) &&
           (((param_1[0x98] & 1U) == 0 ||
            (iVar1 = FUN_ram_42032b7e(0x2f,4,param_1 + 0x94,param_2,&bStack_29,param_4,param_5),
            iVar1 == 0)))) &&
          ((*(int *)(param_1 + 0x9c) == 0 ||
           (((byte)param_1[0xa0] < 2 ||
            (iVar1 = FUN_ram_42032b7e(0xff,param_1[0xa0],*(int *)(param_1 + 0x9c),param_2,&bStack_29
                                      ,param_4,param_5), iVar1 == 0)))))))) {
        if (param_3 != (byte *)0x0) {
          *param_3 = bStack_29;
        }
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

