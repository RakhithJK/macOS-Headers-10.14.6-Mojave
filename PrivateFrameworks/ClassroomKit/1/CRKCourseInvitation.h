//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSString;

@interface CRKCourseInvitation : NSObject <NSSecureCoding>
{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_courseName;
    NSString *_courseDescription;
    unsigned long long _courseMascotType;
    unsigned long long _courseColorType;
    NSString *_instructorName;
    NSData *_instructorImageData;
    NSArray *_anchorCertificates;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSArray *anchorCertificates; // @synthesize anchorCertificates=_anchorCertificates;
@property(copy, nonatomic) NSData *instructorImageData; // @synthesize instructorImageData=_instructorImageData;
@property(copy, nonatomic) NSString *instructorName; // @synthesize instructorName=_instructorName;
@property(nonatomic) unsigned long long courseColorType; // @synthesize courseColorType=_courseColorType;
@property(nonatomic) unsigned long long courseMascotType; // @synthesize courseMascotType=_courseMascotType;
@property(copy, nonatomic) NSString *courseDescription; // @synthesize courseDescription=_courseDescription;
@property(copy, nonatomic) NSString *courseName; // @synthesize courseName=_courseName;
@property(copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // @synthesize courseIdentifier=_courseIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 instructorImageData:(id)arg7 anchorCertificates:(id)arg8;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 courseMascotType:(unsigned long long)arg4 courseColorType:(unsigned long long)arg5 instructorName:(id)arg6 anchorCertificates:(id)arg7;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 instructorImageData:(id)arg5 anchorCertificates:(id)arg6;
- (id)initWithCourseIdentifier:(id)arg1 courseName:(id)arg2 courseDescription:(id)arg3 instructorName:(id)arg4 anchorCertificates:(id)arg5;

@end

