//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YKSRUBaseCard.h"

@class YKSRUCardDescView, YKSRURecoModel;

@interface YKSRURecoCard : YKSRUBaseCard
{
    YKSRUCardDescView *_descView;
    YKSRURecoModel *_cardModel;
}

+ (double)height:(id)arg1;
@property(retain, nonatomic) YKSRURecoModel *cardModel; // @synthesize cardModel=_cardModel;
- (void).cxx_destruct;
- (_Bool)hasTitle;
- (void)setData:(id)arg1;
- (void)layout;
- (id)initWithFrame:(struct CGRect)arg1;

@end
