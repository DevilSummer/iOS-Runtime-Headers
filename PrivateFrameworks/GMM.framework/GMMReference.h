/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString;



@interface GMMReference : NSObject <GMMReadWriteStream>
{
    NSString *_url;
    NSString *_title;
    NSString *_domain;
}

@property(readonly) BOOL hasUrl;
@property(readonly) BOOL hasTitle;
@property(readonly) BOOL hasDomain;
@property(retain) NSString *domain; /* unknown property attribute: V_domain */
@property(retain) NSString *title; /* unknown property attribute: V_title */
@property(retain) NSString *url; /* unknown property attribute: V_url */


- (id)init;
- (void)dealloc;
- (BOOL)hasUrl;
- (BOOL)hasTitle;
- (BOOL)hasDomain;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */

- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)description;

@end