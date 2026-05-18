
void FUN_ram_403959b6(uint param_1,uint param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_2 < 0x2000) {
    (*(code *)&SUB_ram_400109f0)(param_1 << 0x13,param_1 >> 0xd | param_2 << 0x13,param_3,0);
  }
  else {
    lVar1 = (*(code *)&SUB_ram_40010a00)();
    (*(code *)&SUB_ram_400109f0)
              ((int)(lVar1 << 0x13),(int)((ulonglong)(lVar1 << 0x13) >> 0x20),param_3,0);
    (*(code *)&SUB_ram_400109f0)(param_1,param_2,param_3,0);
  }
  return;
}

