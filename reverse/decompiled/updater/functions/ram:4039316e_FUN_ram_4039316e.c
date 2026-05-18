
void FUN_ram_4039316e(int param_1,uint param_2,int param_3)

{
  FUN_ram_403923a2(*(undefined4 *)(param_1 + 0x10));
  if (param_3 == 0) {
    FUN_ram_4039227e();
    return;
  }
  FUN_ram_40392300(*(undefined4 *)(param_1 + 0x10),param_2 * 1000,
                   (int)((ulonglong)param_2 * 1000 >> 0x20));
  return;
}

