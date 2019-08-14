//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFAssembly-Protocol.h"

@class NSString;
@protocol FRFeldsparContext, FRFlintDataProviderFactory;

@interface FREditorialAssembly : NSObject <NFAssembly>
{
    id <FRFeldsparContext> _feldsparContext;
    id <FRFlintDataProviderFactory> _dataProviderFactory;
}

@property(readonly, nonatomic) id <FRFlintDataProviderFactory> dataProviderFactory; // @synthesize dataProviderFactory=_dataProviderFactory;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (void).cxx_destruct;
- (void)loadInRegistry:(id)arg1;
- (id)initWithFeldsparContext:(id)arg1 dataProviderFactory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

