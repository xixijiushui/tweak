//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LFWebViewController.h"

@class NSString;

@interface LFHonorRollWebViewController : LFWebViewController
{
    NSString *_roomId;
    id <LFUserModel> _anchor;
}

@property(retain, nonatomic) id <LFUserModel> anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)buyPatronusWillDisplayInViewController:(id)arg1;
- (void)rightButtonClick;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

