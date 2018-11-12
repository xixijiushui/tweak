//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class LFDropGiftResultModel, LFDropGiftView, NSString;

@interface LFDropGiftViewController : UIViewController
{
    UIViewController *_containerViewController;
    NSString *_roomId;
    NSString *_nickName;
    LFDropGiftView *_dorpGift;
    LFDropGiftResultModel *_giftModel;
}

@property(retain, nonatomic) LFDropGiftResultModel *giftModel; // @synthesize giftModel=_giftModel;
@property(retain, nonatomic) LFDropGiftView *dorpGift; // @synthesize dorpGift=_dorpGift;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)showGiftView:(id)arg1 description:(id)arg2;
- (void)showDropGiftView:(id)arg1;
- (void)viewDidLoad;
- (id)initWithContainerViewController:(id)arg1;

@end
