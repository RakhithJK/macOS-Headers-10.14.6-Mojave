//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTAccessibilityFramework-Protocol.h>

@class NSString;

@interface XCTAccessibilityFramework : NSObject <XCTAccessibilityFramework>
{
    BOOL _allowsRemoteAccess;
}

@property BOOL allowsRemoteAccess; // @synthesize allowsRemoteAccess=_allowsRemoteAccess;
- (id)attributes:(id)arg1 forElement:(struct __AXUIElement *)arg2 error:(id *)arg3;
- (id)hierarchyForElement:(struct __AXUIElement *)arg1 attributes:(id)arg2 options:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

