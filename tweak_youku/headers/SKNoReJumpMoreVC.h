//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKSelectVC.h"

@class NORE_More_Model;

@interface SKNoReJumpMoreVC : SKSelectVC
{
    NORE_More_Model *_n_model;
}

@property(retain, nonatomic) NORE_More_Model *n_model; // @synthesize n_model=_n_model;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidLoad;
- (void)requestDataMoreWithIndex:(long long)arg1;
- (void)requestDataAgain;
- (void)goRquestMore;
- (void)goRquest;
- (void)requestData;

@end

