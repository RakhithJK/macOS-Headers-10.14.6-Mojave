//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCAttachment, NSScriptClassDescription, NSScriptObjectSpecifier, NSString;

@interface MCAppleScriptAttachment : NSObject
{
    NSString *_uuidString;
    MCAttachment *_attachment;
    NSScriptObjectSpecifier *_messageContainer;
    NSScriptClassDescription *_messageClassDescription;
}

@property(retain, nonatomic) NSScriptClassDescription *messageClassDescription; // @synthesize messageClassDescription=_messageClassDescription;
@property(retain, nonatomic) NSScriptObjectSpecifier *messageContainer; // @synthesize messageContainer=_messageContainer;
@property(retain, nonatomic) MCAttachment *attachment; // @synthesize attachment=_attachment;
- (void).cxx_destruct;
- (id)objectSpecifier;
@property(readonly, copy, nonatomic) NSString *uniqueID;
- (id)handleSaveAttachmentCommand:(id)arg1;
- (BOOL)downloaded;
- (id)fileSize;
- (id)mimeType;
- (id)name;
- (id)init;
- (id)initWithMessage:(id)arg1 attachment:(id)arg2;

@end

